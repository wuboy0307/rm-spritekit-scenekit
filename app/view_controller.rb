class ViewController < UIViewController

  def loadView
    bounds = UIScreen.mainScreen.bounds
    self.view = SKView.alloc.initWithFrame(bounds)
  end

  def viewDidLoad
    super

    # Configure the view.
    sk_view = self.view
    sk_view.showsFPS = true
    sk_view.showsNodeCount = true
		sk_view.showsSpriteBounds = false
		sk_view.ignoresSiblingOrder = true
		sk_view.showsDrawCount = true

    # Create and configure the scene.
    scene = GameScene.sceneWithSize(sk_view.bounds.size)
    # scene.scaleMode = SKSceneScaleModeAspectFill

    # Present the scene.
    sk_view.presentScene(scene)
  end

  def shouldAutorotate
    true
  end

  def supportedInterfaceOrientations
    if UIDevice.currentDevice.userInterfaceIdiom == UIUserInterfaceIdiomPhone
      UIInterfaceOrientationMaskAllButUpsideDown
    else
      UIInterfaceOrientationMaskAll
    end
  end

  def didReceiveMemoryWarning
    super
    # Release any cached data, images, etc that aren't in use.
  end
	
	def prefersStatusBarHidden
		true
	end
	
	def skview
		self.view
	end
end
