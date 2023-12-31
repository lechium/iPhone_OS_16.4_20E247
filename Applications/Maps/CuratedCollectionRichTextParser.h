//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOPlaceCollection, NSArray, NSAttributedString, NSDictionary, NSString, UITraitCollection;

@interface CuratedCollectionRichTextParser : NSObject
{
    _Bool _didParseRichText;	// 8 = 0x8
    NSString *_css;	// 16 = 0x10
    GEOPlaceCollection *_collection;	// 24 = 0x18
    NSArray *_collectionItems;	// 32 = 0x20
    UITraitCollection *_traitCollection;	// 40 = 0x28
    NSAttributedString *_collectionDescription;	// 48 = 0x30
    NSDictionary *_collectionItemDescriptions;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00200000007a401d
@property(readonly, nonatomic) NSDictionary *collectionItemDescriptions; // @synthesize collectionItemDescriptions=_collectionItemDescriptions;
@property(readonly, nonatomic) NSAttributedString *collectionDescription; // @synthesize collectionDescription=_collectionDescription;
@property(readonly, nonatomic) UITraitCollection *traitCollection; // @synthesize traitCollection=_traitCollection;
@property(readonly, nonatomic) NSArray *collectionItems; // @synthesize collectionItems=_collectionItems;
@property(readonly, nonatomic) GEOPlaceCollection *collection; // @synthesize collection=_collection;
- (void)_parseHTMLSnippet:(id)arg1 group:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000007a3dc3
- (id)_documentHTMLWithInnerBodyHTML:(id)arg1;	// IMP=0x00100000007a3d30
- (id)_documentCSS;	// IMP=0x00100000007a3c42
- (id)_baseFont;	// IMP=0x00100000007a3c18
- (void)parseRichTextDescriptionsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000007a3bc7
- (_Bool)_mergeRichTextCollectionDescription:(id)arg1 itemDescriptions:(id)arg2;	// IMP=0x00100000007a3a5c
- (void)_generateRichTextDescriptionsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000007a336d
- (void)_generatePlainTextDescriptions;	// IMP=0x00100000007a2dab
- (id)initWithCollection:(id)arg1 collectionItems:(id)arg2 traitCollection:(id)arg3;	// IMP=0x00100000007a2cca

@end

