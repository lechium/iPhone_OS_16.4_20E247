//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface SKUIDynamicGridViewElement
{
    _Bool _hasValidTemplateDefinitionMap;	// 8 = 0x8
    NSMutableDictionary *_templateDefinitionTypeToModeValueMap;	// 16 = 0x10
    long long _minimumEntityCountForSections;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001a49e4
@property(readonly, nonatomic) long long minimumEntityCountForSections; // @synthesize minimumEntityCountForSections=_minimumEntityCountForSections;
- (void)_unfilteredEnumerateChildrenUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000001a4971
- (id)_templateDefinitionTypeToModeValueMap;	// IMP=0x00000000001a4765
- (id)templateDefinitionViewElementsForType:(id)arg1 mode:(id)arg2;	// IMP=0x00000000001a4682
- (id)bestTemplateDefinitionViewElementFromTemplateDefinitionViewElements:(id)arg1 entityValueProvider:(id)arg2;	// IMP=0x00000000001a4447
@property(readonly, nonatomic, getter=isMalformed) _Bool malformed;
@property(readonly, nonatomic) _Bool hasSectionHeaders;
- (_Bool)allowsMultipleSelectionDuringEditing;	// IMP=0x00000000001a41bc
- (long long)pageComponentType;	// IMP=0x00000000001a41b1
- (_Bool)isDynamicContainer;	// IMP=0x00000000001a41a9
- (id)applyUpdatesWithElement:(id)arg1;	// IMP=0x00000000001a40ed
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;	// IMP=0x00000000001a4036

@end

