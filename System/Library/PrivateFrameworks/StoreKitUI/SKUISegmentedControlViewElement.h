//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKUIViewElement.h"

@class NSArray, NSString, SKUIDividerViewElement;

__attribute__((visibility("hidden")))
@interface SKUISegmentedControlViewElement : SKUIViewElement
{
    long long _maximumNumberOfVisibleItems;	// 8 = 0x8
    NSString *_moreListTitle;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000170b37
@property(readonly, nonatomic) NSString *moreListTitle; // @synthesize moreListTitle=_moreListTitle;
@property(readonly, nonatomic) long long maximumNumberOfVisibleItems; // @synthesize maximumNumberOfVisibleItems=_maximumNumberOfVisibleItems;
- (void)_enumerateItemElementsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000017097c
- (long long)pageComponentType;	// IMP=0x0000000000170971
- (id)applyUpdatesWithElement:(id)arg1;	// IMP=0x00000000001708a7
@property(readonly, nonatomic) NSArray *segmentItemTitles;
@property(readonly, nonatomic) long long initialSelectedItemIndex;
- (void)dispatchEventOfType:(unsigned long long)arg1 forItemAtIndex:(long long)arg2;	// IMP=0x0000000000170608
@property(readonly, nonatomic) SKUIDividerViewElement *bottomDivider;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;	// IMP=0x00000000001704d9

@end

