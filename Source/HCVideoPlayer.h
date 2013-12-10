//
//  HCVideoPlayer
//
//  Created by Neil Burchfield on 6/1/13.
//  Copyright (c) 2012 HCRUB. All rights reserved.
//

#import <Foundation/Foundation.h>

extern NSString * const kVideoPlayerVideoChangedNotification;
extern NSString * const kVideoPlayerWillHideControlsNotification;
extern NSString * const kVideoPlayerWillShowControlsNotification;
extern NSString * const kTrackEventVideoStart;
extern NSString * const kTrackEventVideoLiveStart;
extern NSString * const kTrackEventVideoComplete;

@protocol HCVideoPlayerDelegate <NSObject>

@optional
@property (nonatomic) BOOL fullScreenToggled;
- (void)trackEvent:(NSString *)event videoID:(NSString *)videoID title:(NSString *)title;

@end

@protocol HCVideoPlayer <NSObject>

@property (readonly, strong) NSDictionary *currentVideoInfo;
@property (nonatomic, weak) id <HCVideoPlayerDelegate> delegate;
@property (readonly) BOOL fullScreenModeToggled;
@property (nonatomic) BOOL showStaticEndTime;
@property (nonatomic) BOOL allowPortraitFullscreen;

@property (nonatomic, readonly) BOOL isPlaying;

- (void)playVideoWithTitle:(NSString *)title URL:(NSURL *)url videoID:(NSString *)videoID shareURL:(NSURL *)shareURL isStreaming:(BOOL)streaming playInFullScreen:(BOOL)playInFullScreen;
- (void)showCannotFetchStreamError;

- (void)launchFullScreen;
- (void)minimizeVideo;
- (void)playPauseHandler;

@end
