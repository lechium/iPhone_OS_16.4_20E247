//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUIPrivate/NSObject-Protocol.h>

@class PUAccessoryVisibilityInteractionController, UIView;
@protocol PUDisplayLocationProvider;

@protocol PUAccessoryVisibilityInteractionControllerDelegate <NSObject>
- (UIView *)accessoryVisibilityInteractionControllerViewHostingGestureRecognizers:(PUAccessoryVisibilityInteractionController *)arg1;

@optional
- (void)accessoryVisibilityInteractionController:(PUAccessoryVisibilityInteractionController *)arg1 setAccessoryVisible:(_Bool)arg2 changeReason:(long long)arg3;
- (_Bool)accessoryVisibilityInteractionController:(PUAccessoryVisibilityInteractionController *)arg1 isLocationFromProviderInAccessoryContent:(id <PUDisplayLocationProvider>)arg2;
- (void)accessoryVisibilityInteractionControllerDidEnd:(PUAccessoryVisibilityInteractionController *)arg1;
- (_Bool)accessoryVisibilityInteractionController:(PUAccessoryVisibilityInteractionController *)arg1 canBeginAtLocationFromProvider:(id <PUDisplayLocationProvider>)arg2;
@end
