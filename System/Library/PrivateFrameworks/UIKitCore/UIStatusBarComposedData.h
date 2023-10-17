//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UISystemNavigationAction;

__attribute__((visibility("hidden")))
@interface UIStatusBarComposedData : NSObject
{
    CDStruct_97a66028 _rawData;	// 8 = 0x8
    _Bool _itemEnabled[51];	// 3888 = 0xf30
    NSString *_doubleHeightStatus;	// 3944 = 0xf68
    UISystemNavigationAction *_systemNavigationItem;	// 3952 = 0xf70
}

- (void).cxx_destruct;	// IMP=0x0000000000ff907e
@property(retain, nonatomic) UISystemNavigationAction *systemNavigationItem; // @synthesize systemNavigationItem=_systemNavigationItem;
@property(copy, nonatomic) NSString *doubleHeightStatus; // @synthesize doubleHeightStatus=_doubleHeightStatus;
- (id)description;	// IMP=0x0000000000ff8ec5
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000ff8cbb
- (void)setItem:(int)arg1 enabled:(_Bool)arg2;	// IMP=0x0000000000ff8ca7
- (_Bool)isItemEnabled:(int)arg1;	// IMP=0x0000000000ff8c8c
@property(readonly, nonatomic) CDStruct_97a66028 *rawData;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000ff8bbd
- (id)initWithRawData:(const CDStruct_97a66028 *)arg1;	// IMP=0x0000000000ff8b54

@end
