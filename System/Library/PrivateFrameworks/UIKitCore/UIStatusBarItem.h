//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UIStatusBarItem : NSObject
{
    long long _idiom;	// 8 = 0x8
    int _type;	// 16 = 0x10
}

+ (_Bool)isItemWithTypeExclusive:(int)arg1 outBlacklistItems:(id *)arg2 outWhitelistItems:(id *)arg3;	// IMP=0x00600000010019af
+ (_Bool)itemType:(int)arg1 idiom:(long long)arg2 appearsInRegion:(int)arg3;	// IMP=0x00600000010018a1
+ (_Bool)itemType:(int)arg1 idiom:(long long)arg2 canBeEnabledForData:(id)arg3 style:(id)arg4;	// IMP=0x0060000001001854
+ (_Bool)typeIsValid:(int)arg1;	// IMP=0x0060000001001848
+ (id)itemWithType:(int)arg1 idiom:(long long)arg2;	// IMP=0x006000000100179c
@property(readonly, nonatomic) int type; // @synthesize type=_type;
- (id)description;	// IMP=0x0000000001001ed1
- (long long)compareCenterOrder:(id)arg1;	// IMP=0x0000000001001e65
- (long long)compareRightOrder:(id)arg1;	// IMP=0x0000000001001df9
- (long long)compareLeftOrder:(id)arg1;	// IMP=0x0000000001001d8d
- (long long)comparePriority:(id)arg1;	// IMP=0x0000000001001d21
- (_Bool)appearsInRegion:(int)arg1;	// IMP=0x0000000001001cfc
- (_Bool)appearsOnCenter;	// IMP=0x0000000001001ce4
- (_Bool)appearsOnRight;	// IMP=0x0000000001001ccc
- (_Bool)appearsOnLeft;	// IMP=0x0000000001001cb4
@property(readonly, nonatomic) NSString *indicatorName;
- (int)centerOrder;	// IMP=0x0000000001001c4d
@property(readonly, nonatomic) int rightOrder;
@property(readonly, nonatomic) int leftOrder;
@property(readonly, nonatomic) int priority;
@property(readonly, nonatomic) Class viewClass;
- (id)initWithType:(int)arg1;	// IMP=0x0000000001001ab4

@end

