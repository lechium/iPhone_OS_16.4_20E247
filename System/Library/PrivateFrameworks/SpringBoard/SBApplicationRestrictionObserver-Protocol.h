//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@class NSSet, SBApplicationRestrictionController;

@protocol SBApplicationRestrictionObserver <NSObject>
- (void)applicationRestrictionController:(SBApplicationRestrictionController *)arg1 didUpdateVisibleTags:(NSSet *)arg2 hiddenTags:(NSSet *)arg3;
@end
