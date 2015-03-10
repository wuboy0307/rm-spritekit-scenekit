// Generated by IB v0.7.1 gem. Do not edit it manually
// Run `rake ib:open` to refresh

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>
#import <SpriteKit/SpriteKit.h>
#import <SceneKit/SceneKit.h>
#import <QuartzCore/QuartzCore.h>
#import <GLKit/GLKit.h>
#import <AVFoundation/AVFoundation.h>

@interface AppDelegate: UIResponder <UIApplicationDelegate>
@end

@interface AmbientLightNode: SCNNode
-(IBAction) init;

@end

@interface BallNode: SCNNode
-(IBAction) init;

@end

@interface CameraNode: SCNNode
-(IBAction) init;

@end

@interface TDScene: SCNScene
-(IBAction) toggle_rotation;
-(IBAction) toggle_thrust;
-(IBAction) toggle_toon_shader;
-(IBAction) toggle_geometry_shader;
-(IBAction) frag_modifier;
-(IBAction) light_cel_shading_modifier;
-(IBAction) geom_modifier;

@end

@interface GameScene: SKScene
-(IBAction) didMoveToView:(id) view;
-(IBAction) create_labels;

@end

@interface ViewController: UIViewController
-(IBAction) loadView;
-(IBAction) viewDidLoad;
-(IBAction) shouldAutorotate;
-(IBAction) supportedInterfaceOrientations;
-(IBAction) didReceiveMemoryWarning;
-(IBAction) prefersStatusBarHidden;
-(IBAction) skview;

@end

