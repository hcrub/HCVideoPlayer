//
//  HCVideoPlayer
//
//  Created by Neil Burchfield on 6/1/13.
//  Copyright (c) 2012 HCRUB. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "HCVideoPlayer.h"
#import "HCVideoPlayerView.h"

@interface HCVideoPlayerKit : UIViewController <HCVideoPlayer>

@property (nonatomic, weak) id <HCVideoPlayerDelegate> delegate;
@property (readonly, strong) NSDictionary *currentVideoInfo;
@property (readonly, strong) HCVideoPlayerView *videoPlayerView;
@property (readonly) BOOL fullScreenModeToggled;
@property (nonatomic) BOOL showStaticEndTime;
@property (nonatomic, readonly) BOOL isPlaying;
@property (nonatomic) BOOL allowPortraitFullscreen;
@property (nonatomic) UIEdgeInsets controlsEdgeInsets;
@property (readwrite, strong) AVPlayer *videoPlayer;

- (void)playVideoWithTitle:(NSString *)title URL:(NSURL *)url videoID:(NSString *)videoID shareURL:(NSURL *)shareURL isStreaming:(BOOL)streaming playInFullScreen:(BOOL)playInFullScreen;
- (void)syncFullScreenButton:(UIInterfaceOrientation)toInterfaceOrientation;
- (void)showCannotFetchStreamError;
- (void)launchFullScreen;
- (void)minimizeVideo;
- (void)playPauseHandler;
+ (HCVideoPlayerKit *)videoPlayerWithContainingViewController:(UIViewController *)containingViewController
                                            optionalTopView:(UIView *)topView
                                    hideTopViewWithControls:(BOOL)hideTopViewWithControls;

@end
