//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CRDataDetectorsOutputRegion, DDScannerResult, NSArray;

__attribute__((visibility("hidden")))
@interface VKCTextDataDetectorElement
{
    _Bool _childrenCreated;	// 8 = 0x8
    NSArray *_boundingQuads;	// 16 = 0x10
    unsigned long long _dataDetectorTypes;	// 24 = 0x18
    DDScannerResult *_scannerResult;	// 32 = 0x20
    unsigned long long _crDataType;	// 40 = 0x28
    NSArray *__children;	// 48 = 0x30
}

+ (id)dataDetectorElementFromCROutputRegion:(id)arg1 parentDocument:(id)arg2;	// IMP=0x00600000000905b9
- (void).cxx_destruct;	// IMP=0x00000000000918d2
@property(nonatomic) _Bool childrenCreated; // @synthesize childrenCreated=_childrenCreated;
@property(copy, nonatomic) NSArray *_children; // @synthesize _children=__children;
@property(readonly, nonatomic) unsigned long long crDataType; // @synthesize crDataType=_crDataType;
@property(nonatomic) unsigned long long dataDetectorTypes; // @synthesize dataDetectorTypes=_dataDetectorTypes;
- (void)createChildrenIfNecessary;	// IMP=0x00000000000910dc
- (id)debugMenu;	// IMP=0x0000000000090aeb
- (id)children;	// IMP=0x0000000000090abd
- (id)boundingQuads;	// IMP=0x0000000000090907
@property(readonly, nonatomic) struct _NSRange characterRange;
- (id)scannerResult;	// IMP=0x000000000009089f
- (_Bool)isUnitConversionDataDetector;	// IMP=0x0000000000090884
- (_Bool)isTextDataDetector;	// IMP=0x000000000009087c
- (unsigned long long)dataType;	// IMP=0x0000000000090838
@property(readonly, nonatomic) CRDataDetectorsOutputRegion *ddOutputRegion;
- (id)initWithScannerResult:(id)arg1;	// IMP=0x0000000000090741
- (id)initWithCROutputRegion:(id)arg1 parentDocument:(id)arg2;	// IMP=0x0000000000090629

@end

