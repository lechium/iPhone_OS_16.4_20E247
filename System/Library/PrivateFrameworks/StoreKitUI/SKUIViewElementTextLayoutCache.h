//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, SKUILayoutCache;

__attribute__((visibility("hidden")))
@interface SKUIViewElementTextLayoutCache : NSObject
{
    SKUILayoutCache *_layoutCache;	// 8 = 0x8
    NSMutableDictionary *_layoutMapTables;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000324be6
@property(readonly, nonatomic) SKUILayoutCache *layoutCache; // @synthesize layoutCache=_layoutCache;
- (id)_layoutIndexForViewElement:(id)arg1 width:(long long)arg2;	// IMP=0x0000000000324a46
- (id)_existingLayoutForViewElement:(id)arg1 width:(long long)arg2;	// IMP=0x00000000003249ca
- (id)_createLayoutRequestForViewElement:(id)arg1 attributedString:(id)arg2 width:(long long)arg3;	// IMP=0x0000000000324938
- (id)_createLayoutRequestForOrdinal:(id)arg1 attributedString:(id)arg2 width:(long long)arg3;	// IMP=0x0000000000324926
- (id)_createLayoutRequestForLabel:(id)arg1 attributedString:(id)arg2 width:(long long)arg3;	// IMP=0x000000000032482c
- (id)_createLayoutRequestForButton:(id)arg1 attributedString:(id)arg2 width:(long long)arg3;	// IMP=0x00000000003246d3
- (id)_createLayoutRequestForBadge:(id)arg1 width:(long long)arg2;	// IMP=0x00000000003245f4
- (struct CGSize)_bestGuessSizeForOrdinal:(id)arg1 width:(double)arg2;	// IMP=0x000000000032430a
- (struct CGSize)_bestGuessSizeForLabel:(id)arg1 width:(double)arg2;	// IMP=0x0000000000324054
- (struct CGSize)_bestGuessSizeForButton:(id)arg1 width:(double)arg2;	// IMP=0x0000000000323cea
- (id)_bestGuessCache;	// IMP=0x0000000000323c94
- (void)_addRequest:(id)arg1 forViewElement:(id)arg2;	// IMP=0x0000000000323931
- (struct CGSize)sizeForViewElement:(id)arg1 width:(double)arg2;	// IMP=0x0000000000323865
- (struct CGSize)sizeForLabel:(id)arg1 width:(double)arg2;	// IMP=0x0000000000323768
- (struct CGSize)sizeForButton:(id)arg1 width:(double)arg2;	// IMP=0x000000000032366b
- (void)requestLayoutForViewElement:(id)arg1 attributedString:(id)arg2 width:(long long)arg3;	// IMP=0x00000000003235ef
- (void)requestLayoutForOrdinal:(id)arg1 attributedString:(id)arg2 width:(long long)arg3;	// IMP=0x0000000000323573
- (void)requestLayoutForLabel:(id)arg1 attributedString:(id)arg2 width:(long long)arg3;	// IMP=0x00000000003234f7
- (void)requestLayoutForButton:(id)arg1 attributedString:(id)arg2 width:(long long)arg3;	// IMP=0x000000000032347b
- (void)requestLayoutForBadge:(id)arg1 width:(long long)arg2;	// IMP=0x0000000000323404
- (id)layoutForWidth:(long long)arg1 viewElement:(id)arg2;	// IMP=0x00000000003233e9
- (void)invalidateLayoutsForUpdatedElements;	// IMP=0x00000000003230eb
- (struct CGSize)estimatedSizeForOrdinal:(id)arg1 width:(double)arg2;	// IMP=0x000000000032303c
- (struct CGSize)estimatedSizeForLabel:(id)arg1 width:(double)arg2;	// IMP=0x0000000000322e6e
- (struct CGSize)estimatedSizeForButton:(id)arg1 width:(double)arg2;	// IMP=0x0000000000322dbf
- (id)initWithLayoutCache:(id)arg1;	// IMP=0x0000000000322d3a

@end
