//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMActionSet, NSArray, NSString;

@protocol HMTriggerBuilder
@property(copy, nonatomic) NSArray *actionSets;
@property(nonatomic, getter=isEnabled) _Bool enabled;
@property(copy, nonatomic) NSString *name;
- (void)removeActionSet:(HMActionSet *)arg1;
- (void)addActionSet:(HMActionSet *)arg1;
@end
