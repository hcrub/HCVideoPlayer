//
//  HCVideoPlayer
//
//  Created by Neil Burchfield on 6/1/13.
//  Copyright (c) 2012 HCRUB. All rights reserved.
//

#import "HCFullScreenViewController.h"
#import "HCFullScreenView.h"

@interface HCFullScreenViewController ()
@property (nonatomic, strong) HCFullScreenView *fullScreenView;
@end

@implementation HCFullScreenViewController

- (id)init
{
    if (self = [super init]) {
        self.modalTransitionStyle = UIModalTransitionStyleCrossDissolve;
    }
    
    return self;
}

- (void)loadView
{
    self.fullScreenView = [[HCFullScreenView alloc] init];
    [self setView:self.fullScreenView];
}

- (NSUInteger)supportedInterfaceOrientations
{
    if (!self.allowPortraitFullscreen) {
        return UIInterfaceOrientationMaskLandscape;
    } else {
        return UIInterfaceOrientationMaskAll;
    }
}

- (BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)toInterfaceOrientation
{
    if (!self.allowPortraitFullscreen) {
        return UIInterfaceOrientationIsLandscape(toInterfaceOrientation);
    } else {
        return YES;
    }
}

@end
