//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CRLColorAccessibility, NSString;

@interface CRLFillAccessibility
{
}

+ (id)crlaxDescriptionForFill:(id)arg1;	// IMP=0x0020000000007d8f
+ (Class)crlaxBaseSafeCategoryClass;	// IMP=0x0010000000007c8a
+ (id)crlaxTargetClassName;	// IMP=0x0010000000007c7d
+ (id)crlaxCastFrom:(id)arg1;	// IMP=0x0010000000007ca4
@property(readonly, nonatomic) NSString *crlaxStyleInfoDescription;
@property(readonly, nonatomic) CRLColorAccessibility *crlaxReferenceColor;
@property(readonly, nonatomic) long long crlaxFillType;
- (id)crlaxTarget;	// IMP=0x0010000000007c9b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
