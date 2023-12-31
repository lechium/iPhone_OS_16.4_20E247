//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CRLItemGeometryAccessibility, NSString;

@interface CRLBoardItemAccessibility
{
    NSString *_crlaxUserProvidedTitle;	// 8 = 0x8
    NSString *_crlaxUserProvidedCaption;	// 16 = 0x10
    NSString *_crlaxUserProvidedTitleLabel;	// 24 = 0x18
    NSString *_crlaxUserProvidedCaptionLabel;	// 32 = 0x20
}

+ (Class)crlaxBaseSafeCategoryClass;	// IMP=0x00100000000a6516
+ (id)crlaxTargetClassName;	// IMP=0x00100000000a6509
- (void).cxx_destruct;	// IMP=0x00200000000a66ec
@property(readonly, nonatomic) NSString *crlaxUserProvidedCaptionLabel; // @synthesize crlaxUserProvidedCaptionLabel=_crlaxUserProvidedCaptionLabel;
@property(readonly, nonatomic) NSString *crlaxUserProvidedTitleLabel; // @synthesize crlaxUserProvidedTitleLabel=_crlaxUserProvidedTitleLabel;
@property(readonly, nonatomic) NSString *crlaxUserProvidedCaption; // @synthesize crlaxUserProvidedCaption=_crlaxUserProvidedCaption;
@property(readonly, nonatomic) NSString *crlaxUserProvidedTitle; // @synthesize crlaxUserProvidedTitle=_crlaxUserProvidedTitle;
@property(readonly, nonatomic) CRLItemGeometryAccessibility *crlaxGeometry;
@property(readonly, nonatomic) NSString *crlaxTypeDescription;
@property(readonly, nonatomic) id crlaxComment;
@property(readonly, nonatomic) NSString *crlaxUserProvidedDescription;

@end

