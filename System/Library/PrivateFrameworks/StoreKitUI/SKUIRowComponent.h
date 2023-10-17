//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKUIPageComponent.h"

@class NSArray, SKUIRowViewElement, UIColor;

__attribute__((visibility("hidden")))
@interface SKUIRowComponent : SKUIPageComponent
{
    UIColor *_backgroundColor;	// 8 = 0x8
    NSArray *_childComponents;	// 16 = 0x10
    NSArray *_columnWidths;	// 24 = 0x18
    long long _missingItemCount;	// 32 = 0x20
    long long _numberOfColumns;	// 40 = 0x28
    _Bool _shouldAutoFlow;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000106446
@property(readonly, nonatomic) _Bool shouldAutoFlow; // @synthesize shouldAutoFlow=_shouldAutoFlow;
@property(readonly, nonatomic) long long numberOfColumns; // @synthesize numberOfColumns=_numberOfColumns;
@property(readonly, nonatomic) NSArray *columnWidths; // @synthesize columnWidths=_columnWidths;
@property(readonly, nonatomic) NSArray *childComponents; // @synthesize childComponents=_childComponents;
@property(readonly, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (id)description;	// IMP=0x000000000010635a
- (_Bool)_isChildMissingItemData:(id)arg1;	// IMP=0x00000000001062af
- (id)_childComponentWithContext:(id)arg1;	// IMP=0x00000000001061c8
- (id)_updateWithMissingItems:(id)arg1;	// IMP=0x000000000010607e
- (id)metricsElementName;	// IMP=0x0000000000106071
- (_Bool)isMissingItemData;	// IMP=0x000000000010605c
- (void)enumerateMissingItemIdentifiersFromIndex:(long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000105ed9
- (long long)componentType;	// IMP=0x0000000000105ece
- (id)initWithViewElement:(id)arg1;	// IMP=0x0000000000105e9f
- (id)initWithCustomPageContext:(id)arg1;	// IMP=0x0000000000105945

// Remaining properties
@property(readonly, nonatomic) SKUIRowViewElement *viewElement; // @dynamic viewElement;

@end
