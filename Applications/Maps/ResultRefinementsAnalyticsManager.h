//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface ResultRefinementsAnalyticsManager : NSObject
{
    _Bool _isFromWaypointEditor;	// 8 = 0x8
}

@property(nonatomic) _Bool isFromWaypointEditor; // @synthesize isFromWaypointEditor=_isFromWaypointEditor;
- (void)resultRefinementTappedWithKey:(id)arg1 source:(unsigned long long)arg2 refinementType:(unsigned long long)arg3 isSelected:(_Bool)arg4;	// IMP=0x0010000000166c50
- (void)logRefinementsEvent:(unsigned long long)arg1 fromSource:(unsigned long long)arg2;	// IMP=0x0010000000166b4f
- (id)initWithRefinementsFromWaypointEditor:(_Bool)arg1;	// IMP=0x0010000000166b14
- (id)init;	// IMP=0x0010000000166b00

@end
