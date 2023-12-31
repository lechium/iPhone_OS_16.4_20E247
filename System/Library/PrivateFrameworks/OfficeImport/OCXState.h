//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CXNamespace;

__attribute__((visibility("hidden")))
@interface OCXState : NSObject
{
    int mXMLFormat;	// 8 = 0x8
    CXNamespace *mOCXRelationshipsNamespace;	// 16 = 0x10
    CXNamespace *mOCXDrawingNamespace;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000037b3f9
@property(retain, nonatomic) CXNamespace *OCXDrawingNamespace; // @synthesize OCXDrawingNamespace=mOCXDrawingNamespace;
@property(retain, nonatomic) CXNamespace *OCXRelationshipsNamespace; // @synthesize OCXRelationshipsNamespace=mOCXRelationshipsNamespace;
@property(readonly, nonatomic) int xmlFormat; // @synthesize xmlFormat=mXMLFormat;
- (id)OCXSettingsRelationshipType;	// IMP=0x000000000037b397
- (id)OCXTableStylesRelationshipType;	// IMP=0x000000000037b374
- (id)OCXPackageViewPropsRelationshipType;	// IMP=0x000000000037b351
- (id)OCXPackagePresPropsRelationshipType;	// IMP=0x000000000037b32e
- (id)OCXNumberingRelationshipType;	// IMP=0x000000000037b30b
- (id)OCXNotesMasterRelationshipType;	// IMP=0x000000000037b2e8
- (id)OCXVmlDrawingRelationshipType;	// IMP=0x000000000037b2d4
- (id)OCXThemeOverrideRelationshipType;	// IMP=0x000000000037b2b1
- (id)OCXThemeRelationshipType;	// IMP=0x000000000037b28e
- (id)OCXLegacyDocTextInfoRelationshipType;	// IMP=0x000000000037b27a
- (id)OCXCustomXmlRelationshipType;	// IMP=0x000000000037b257
- (id)OCXCommentAuthorsRelationshipType;	// IMP=0x000000000037b234
- (id)OCXNotesSlideRelationshipType;	// IMP=0x000000000037b211
- (id)OCXSlideRelationshipType;	// IMP=0x000000000037b1ee
- (id)OCXSlideLayoutRelationshipType;	// IMP=0x000000000037b1cb
- (id)OCXSlideMasterRelationshipType;	// IMP=0x000000000037b1a8
- (id)OCXTableRelationshipType;	// IMP=0x000000000037b185
- (id)OCXPivotTableRelationshipType;	// IMP=0x000000000037b162
- (id)OCXCommentsExtendedRelationshipType;	// IMP=0x000000000037b14e
- (id)OCXCommentsRelationshipType;	// IMP=0x000000000037b12b
- (id)OCXFootnotesRelationshipType;	// IMP=0x000000000037b108
- (id)OCXFontTableRelationshipType;	// IMP=0x000000000037b0e5
- (id)OCXEndnotesRelationshipType;	// IMP=0x000000000037b0c2
- (id)OCXDrawingRelationshipType;	// IMP=0x000000000037b09f
- (id)OCXSharedStringsRelationshipType;	// IMP=0x000000000037b07c
- (id)OCXStylesRelationshipType;	// IMP=0x000000000037b059
- (void)setupNSForXMLFormat:(int)arg1;	// IMP=0x000000000037af26
- (id)init;	// IMP=0x000000000037aeba
- (void)setXmlFormat:(int)arg1;	// IMP=0x000000000037b421

@end

