//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CNContactAction.h"

@class CNUIUserActivityManager;

__attribute__((visibility("hidden")))
@interface CNEditInAppAction : CNContactAction
{
    CNUIUserActivityManager *_activityManager;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000018ec3f
@property(readonly, nonatomic) CNUIUserActivityManager *activityManager; // @synthesize activityManager=_activityManager;
- (id)title;	// IMP=0x000000000018ebd2
- (void)performActionWithSender:(id)arg1;	// IMP=0x000000000018eb62
- (id)initWithContact:(id)arg1 activityManager:(id)arg2;	// IMP=0x000000000018ead7

@end

