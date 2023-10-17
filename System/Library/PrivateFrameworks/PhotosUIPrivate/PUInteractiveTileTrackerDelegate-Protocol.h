//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUIPrivate/NSObject-Protocol.h>

@class PUInteractiveTileTracker, PUTileController;

@protocol PUInteractiveTileTrackerDelegate <NSObject>

@optional
- (void)interactiveTileTracker:(PUInteractiveTileTracker *)arg1 didStopTrackingTileController:(PUTileController *)arg2;
- (void)interactiveTileTracker:(PUInteractiveTileTracker *)arg1 willStartTrackingTileController:(PUTileController *)arg2;
@end
