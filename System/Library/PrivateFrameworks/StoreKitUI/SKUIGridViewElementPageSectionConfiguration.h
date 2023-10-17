//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, SKUIStorePageSectionContext, SKUIViewElementLayoutContext, UIColor;
@protocol SKUIGridViewElementPageSectionConfigurationDataSource;

__attribute__((visibility("hidden")))
@interface SKUIGridViewElementPageSectionConfiguration : NSObject
{
    long long _cardVerticalSpacingStyle;	// 8 = 0x8
    double _cellContentWidth;	// 16 = 0x10
    _Bool _cellPaddingNeedsReloading;	// 24 = 0x18
    double _cellPaddingInteriorHorizontal;	// 32 = 0x20
    double _cellPaddingLeftEdgeHorizontal;	// 40 = 0x28
    double _cellPaddingRightEdgeHorizontal;	// 48 = 0x30
    struct UIEdgeInsets _gridViewElementStyleElementPadding;	// 56 = 0x38
    double _gridViewElementStyleItemWidth;	// 88 = 0x58
    _Bool _gridViewElementStyleItemWidthIsPercentage;	// 96 = 0x60
    _Bool _gridIsEdgeToEdge;	// 97 = 0x61
    _Bool _hasGridViewElementStyle;	// 98 = 0x62
    _Bool _hasHeader;	// 99 = 0x63
    struct UIEdgeInsets _separatorMargins;	// 104 = 0x68
    long long _lockupType;	// 136 = 0x88
    double _minimumCellHeight;	// 144 = 0x90
    unsigned long long _numberOfGridItems;	// 152 = 0x98
    NSArray *_positions;	// 160 = 0xa0
    UIColor *_separatorColor;	// 168 = 0xa8
    long long _separatorStyle;	// 176 = 0xb0
    struct UIEdgeInsets _separatorWidths;	// 184 = 0xb8
    _Bool _showsEditMode;	// 216 = 0xd8
    NSArray *_viewElements;	// 224 = 0xe0
    struct {
        unsigned int configurePositionForItemAtIndexPath:1;
    } _dataSourceRespondsToSelectorFlags;	// 232 = 0xe8
    _Bool _rendersWithPerspective;	// 236 = 0xec
    SKUIViewElementLayoutContext *_cellLayoutContext;	// 240 = 0xf0
    long long _numberOfColumns;	// 248 = 0xf8
    SKUIStorePageSectionContext *_pageSectionContext;	// 256 = 0x100
    id <SKUIGridViewElementPageSectionConfigurationDataSource> _dataSource;	// 264 = 0x108
}

- (void).cxx_destruct;	// IMP=0x0000000000290a5d
@property(nonatomic) __weak id <SKUIGridViewElementPageSectionConfigurationDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) _Bool showsEditMode; // @synthesize showsEditMode=_showsEditMode;
@property(nonatomic) _Bool rendersWithPerspective; // @synthesize rendersWithPerspective=_rendersWithPerspective;
@property(retain, nonatomic) SKUIStorePageSectionContext *pageSectionContext; // @synthesize pageSectionContext=_pageSectionContext;
@property(nonatomic) long long numberOfColumns; // @synthesize numberOfColumns=_numberOfColumns;
@property(retain, nonatomic) SKUIViewElementLayoutContext *cellLayoutContext; // @synthesize cellLayoutContext=_cellLayoutContext;
- (_Bool)_useOrdinalPadding;	// IMP=0x00000000002907c6
- (void)_reloadCellPaddingIfNeeded;	// IMP=0x00000000002904e6
- (long long)_numberOfColumnsForWidth:(double)arg1 style:(id)arg2;	// IMP=0x00000000002903f3
- (struct UIEdgeInsets)_normalizedContentInsetForViewElement:(id)arg1 indexPath:(id)arg2;	// IMP=0x00000000002901cd
- (long long)_lockupTypeForLockup:(id)arg1;	// IMP=0x00000000002901a9
- (id)_lockupCellReuseIdentifierWithLockup:(id)arg1;	// IMP=0x0000000000290175
- (_Bool)_isContainedWithinExploreTemplateWithGridViewElement:(id)arg1;	// IMP=0x00000000002900d1
- (void)_enumerateViewElementsForRowOfIndexPath:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000028ff2d
- (double)_columnContentWidthPaddingForWidth:(double)arg1;	// IMP=0x000000000028feb2
- (double)_cellPaddingRightEdgeHorizontal;	// IMP=0x000000000028fe90
- (double)_cellPaddingLeftEdgeHorizontal;	// IMP=0x000000000028fe6e
- (double)_cellPaddingInteriorHorizontal;	// IMP=0x000000000028fe4c
- (struct UIEdgeInsets)_cellInsetsForViewElement:(id)arg1 indexPath:(id)arg2;	// IMP=0x000000000028f910
- (double)_cellHeightForViewElement:(id)arg1 width:(double)arg2;	// IMP=0x000000000028f7fd
- (double)_cellContentWidth;	// IMP=0x000000000028f473
- (Class)_cardCellClassForCard:(id)arg1;	// IMP=0x000000000028f430
- (id)_cardArtworkBoundingSizeForIndexPath:(id)arg1;	// IMP=0x000000000028f21d
- (_Bool)viewElementIsStandardCard:(id)arg1;	// IMP=0x000000000028f1c6
- (void)updateStylePropertiesForGridViewElement:(id)arg1 gridItemViewElements:(id)arg2 numberOfGridItems:(unsigned long long)arg3;	// IMP=0x000000000028e8b0
- (void)updateLayoutPropertiesForGridViewElement:(id)arg1;	// IMP=0x000000000028e38a
- (struct UIEdgeInsets)sectionContentInsetAdjustedFromValue:(struct UIEdgeInsets)arg1 forGridViewElement:(id)arg2;	// IMP=0x000000000028e2f2
- (void)requestCellLayoutForViewElement:(id)arg1;	// IMP=0x000000000028e20e
- (void)reloadCellWithIndexPath:(id)arg1 forViewElement:(id)arg2 reason:(long long)arg3;	// IMP=0x000000000028e071
- (void)registerReusableClassesForCollectionView:(id)arg1;	// IMP=0x000000000028df20
- (long long)positionForIndexPath:(id)arg1;	// IMP=0x000000000028de36
- (Class)lockupCellClassWithLockup:(id)arg1;	// IMP=0x000000000028ddfb
- (void)configureCell:(id)arg1 forViewElement:(id)arg2 indexPath:(id)arg3;	// IMP=0x000000000028d658
- (void)collectionViewWillApplyLayoutAttributes:(id)arg1;	// IMP=0x000000000028d5df
- (struct CGSize)cellSizeForViewElement:(id)arg1 indexPath:(id)arg2;	// IMP=0x000000000028d127
- (id)cellForViewElement:(id)arg1 indexPath:(id)arg2;	// IMP=0x000000000028ce13
- (Class)cellClassForViewElement:(id)arg1;	// IMP=0x000000000028cd2f
- (id)backgroundColorForViewElement:(id)arg1;	// IMP=0x000000000028cc60
@property(readonly, nonatomic) double columnWidth;
@property(readonly, nonatomic) double columnContentWidth;

@end
