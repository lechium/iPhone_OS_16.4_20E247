//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HFServiceItem, NSMutableArray;

__attribute__((visibility("hidden")))
@interface HUQuickControlGridServiceSection : NSObject
{
    HFServiceItem *_serviceItem;	// 8 = 0x8
    NSMutableArray *_gridControlItems;	// 16 = 0x10
    NSMutableArray *_supplementaryControlItems;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001be394
@property(retain, nonatomic) NSMutableArray *supplementaryControlItems; // @synthesize supplementaryControlItems=_supplementaryControlItems;
@property(retain, nonatomic) NSMutableArray *gridControlItems; // @synthesize gridControlItems=_gridControlItems;
@property(retain, nonatomic) HFServiceItem *serviceItem; // @synthesize serviceItem=_serviceItem;
- (id)init;	// IMP=0x00000000001be2a6

@end
