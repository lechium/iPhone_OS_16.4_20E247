//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCoding-Protocol.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface UIKBAutoFillTestTableViewDataSource : NSObject <NSCoding>
{
    NSMutableDictionary *_rowCountMap;	// 8 = 0x8
    NSMutableDictionary *_visibleCellDataMap;	// 16 = 0x10
    NSMutableDictionary *_headerDataMap;	// 24 = 0x18
    NSMutableDictionary *_footerDataMap;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000095d3dc
- (id)viewForFooterInSection:(long long)arg1;	// IMP=0x000000000095d354
- (id)viewForHeaderInSection:(long long)arg1;	// IMP=0x000000000095d2cc
- (double)heightForFooterInSection:(long long)arg1;	// IMP=0x000000000095d222
- (double)heightForHeaderInSection:(long long)arg1;	// IMP=0x000000000095d178
- (id)titleForFooterInSection:(long long)arg1;	// IMP=0x000000000095d0f0
- (id)titleForHeaderInSection:(long long)arg1;	// IMP=0x000000000095d068
- (double)heightForRowAtIndexPath:(id)arg1;	// IMP=0x000000000095cff8
- (id)cellForRowAtIndexPath:(id)arg1;	// IMP=0x000000000095ced9
- (long long)numberOfRowsInSection:(long long)arg1;	// IMP=0x000000000095ce5d
@property(readonly, nonatomic) long long numberOfSections;
- (void)setFooterData:(id)arg1 forSection:(long long)arg2;	// IMP=0x000000000095cdc5
- (void)setHeaderData:(id)arg1 forSection:(long long)arg2;	// IMP=0x000000000095cd43
- (void)setCellData:(id)arg1 forRowAtIndexPath:(id)arg2;	// IMP=0x000000000095cd2d
- (void)setNumberOfRows:(long long)arg1 forSection:(long long)arg2;	// IMP=0x000000000095cc9d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000095cc08
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000095ca8b
- (id)init;	// IMP=0x000000000095c998

@end
