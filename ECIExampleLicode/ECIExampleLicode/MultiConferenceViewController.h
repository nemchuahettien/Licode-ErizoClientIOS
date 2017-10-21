//
//  MultiConferenceViewController.h
//  ECIExampleLicode
//
//  Created by Alvaro Gil on 9/4/15.
//  Copyright (c) 2015 Alvaro Gil. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ECRoom.h"

@import WebRTC;

@interface MultiConferenceViewController : UIViewController <ECRoomDelegate>

@property (weak, nonatomic) IBOutlet UITextField *inputUsername;
@property (weak, nonatomic) IBOutlet UIButton *connectButton;
@property (weak, nonatomic) IBOutlet UIButton *leaveButton;
@property (weak, nonatomic) IBOutlet RTCEAGLVideoView *localView;
@property (weak, nonatomic) IBOutlet UILabel *statusLabel;

@property (strong, nonatomic) NSString *roomId;

- (IBAction)connect:(id)sender;
- (IBAction)leave:(id)sender;
- (IBAction)unpublish:(id)sender;

@end

