//
//  HCVideoPlayer
//
//  Created by Neil Burchfield on 6/1/13.
//  Copyright (c) 2012 HCRUB. All rights reserved.
//

#import "HCFullScreenView.h"

@implementation HCFullScreenView

- (id)init
{
    if ((self = [super init])) {
        self.autoresizesSubviews = UIViewAutoresizingFlexibleHeight|UIViewAutoresizingFlexibleWidth;
        self.backgroundColor = [UIColor blackColor];
    }
    
    return self;
}

@end