//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString;

@interface APPBAdAction : PBCodable
{
    unsigned long long _adamIdentifier;	// 8 = 0x8
    double _autoDismissInterval;	// 16 = 0x10
    int _action;	// 24 = 0x18
    NSString *_actionURL;	// 32 = 0x20
    NSString *_actionWebArchiveURL;	// 40 = 0x28
    NSMutableArray *_allowedExternalDomains;	// 48 = 0x30
    int _appStoreViewTemplate;	// 56 = 0x38
    unsigned int _backgroundColor;	// 60 = 0x3c
    NSString *_cancelButtonForPurchaseDialog;	// 64 = 0x40
    NSString *_cancelLabelForExitDialog;	// 72 = 0x48
    float _confirmedClickTimeInterval;	// 80 = 0x50
    NSString *_continueLabelForExitDialog;	// 88 = 0x58
    NSString *_identifier;	// 96 = 0x60
    unsigned int _letterboxStoryboardColor;	// 104 = 0x68
    NSString *_messageForExitDialog;	// 112 = 0x70
    NSString *_messageForPurchaseDialog;	// 120 = 0x78
    NSString *_okButtonForPurchaseDialog;	// 128 = 0x80
    NSMutableArray *_parameters;	// 136 = 0x88
    int _storyboardPresentationOrientations;	// 144 = 0x90
    NSMutableArray *_storyboardSizes;	// 152 = 0x98
    int _storyboardSupportedOrientations;	// 160 = 0xa0
    NSString *_titleForExitDialog;	// 168 = 0xa8
    NSString *_titleForPurchaseDialog;	// 176 = 0xb0
    int _transitionType;	// 184 = 0xb8
    _Bool _adManagesPurchaseFlow;	// 188 = 0xbc
    _Bool _allowSelfDismissal;	// 189 = 0xbd
    _Bool _loadNewImpressionOnActionComplete;	// 190 = 0xbe
    _Bool _scrolling;	// 191 = 0xbf
    _Bool _suppressesPermissionToExitDialog;	// 192 = 0xc0
    struct {
        unsigned int adamIdentifier:1;
        unsigned int autoDismissInterval:1;
        unsigned int appStoreViewTemplate:1;
        unsigned int backgroundColor:1;
        unsigned int confirmedClickTimeInterval:1;
        unsigned int letterboxStoryboardColor:1;
        unsigned int storyboardPresentationOrientations:1;
        unsigned int storyboardSupportedOrientations:1;
        unsigned int transitionType:1;
        unsigned int adManagesPurchaseFlow:1;
        unsigned int allowSelfDismissal:1;
        unsigned int loadNewImpressionOnActionComplete:1;
        unsigned int scrolling:1;
        unsigned int suppressesPermissionToExitDialog:1;
    } _has;	// 196 = 0xc4
}

+ (Class)allowedExternalDomainsType;	// IMP=0x00200000000804ab
+ (Class)storyboardSizesType;	// IMP=0x001000000008003d
+ (Class)parametersType;	// IMP=0x001000000007fc62
- (void).cxx_destruct;	// IMP=0x0020000000084931
@property(nonatomic) unsigned long long adamIdentifier; // @synthesize adamIdentifier=_adamIdentifier;
@property(retain, nonatomic) NSString *okButtonForPurchaseDialog; // @synthesize okButtonForPurchaseDialog=_okButtonForPurchaseDialog;
@property(retain, nonatomic) NSString *cancelButtonForPurchaseDialog; // @synthesize cancelButtonForPurchaseDialog=_cancelButtonForPurchaseDialog;
@property(retain, nonatomic) NSString *messageForPurchaseDialog; // @synthesize messageForPurchaseDialog=_messageForPurchaseDialog;
@property(retain, nonatomic) NSString *titleForPurchaseDialog; // @synthesize titleForPurchaseDialog=_titleForPurchaseDialog;
@property(nonatomic) _Bool adManagesPurchaseFlow; // @synthesize adManagesPurchaseFlow=_adManagesPurchaseFlow;
@property(retain, nonatomic) NSMutableArray *allowedExternalDomains; // @synthesize allowedExternalDomains=_allowedExternalDomains;
@property(nonatomic) _Bool allowSelfDismissal; // @synthesize allowSelfDismissal=_allowSelfDismissal;
@property(nonatomic) unsigned int letterboxStoryboardColor; // @synthesize letterboxStoryboardColor=_letterboxStoryboardColor;
@property(retain, nonatomic) NSMutableArray *storyboardSizes; // @synthesize storyboardSizes=_storyboardSizes;
@property(nonatomic) _Bool scrolling; // @synthesize scrolling=_scrolling;
@property(nonatomic) unsigned int backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) _Bool loadNewImpressionOnActionComplete; // @synthesize loadNewImpressionOnActionComplete=_loadNewImpressionOnActionComplete;
@property(nonatomic) float confirmedClickTimeInterval; // @synthesize confirmedClickTimeInterval=_confirmedClickTimeInterval;
@property(retain, nonatomic) NSString *continueLabelForExitDialog; // @synthesize continueLabelForExitDialog=_continueLabelForExitDialog;
@property(retain, nonatomic) NSString *cancelLabelForExitDialog; // @synthesize cancelLabelForExitDialog=_cancelLabelForExitDialog;
@property(retain, nonatomic) NSString *messageForExitDialog; // @synthesize messageForExitDialog=_messageForExitDialog;
@property(retain, nonatomic) NSString *titleForExitDialog; // @synthesize titleForExitDialog=_titleForExitDialog;
@property(nonatomic) _Bool suppressesPermissionToExitDialog; // @synthesize suppressesPermissionToExitDialog=_suppressesPermissionToExitDialog;
@property(retain, nonatomic) NSMutableArray *parameters; // @synthesize parameters=_parameters;
@property(retain, nonatomic) NSString *actionWebArchiveURL; // @synthesize actionWebArchiveURL=_actionWebArchiveURL;
@property(retain, nonatomic) NSString *actionURL; // @synthesize actionURL=_actionURL;
@property(nonatomic) int action; // @synthesize action=_action;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000083ffb
- (unsigned long long)hash;	// IMP=0x0010000000083a2c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000833e6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000082bd0
- (void)copyTo:(id)arg1;	// IMP=0x00100000000826e0
- (void)writeTo:(id)arg1;	// IMP=0x00100000000820a1
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000082094
- (id)dictionaryRepresentation;	// IMP=0x00100000000808b0
- (id)description;	// IMP=0x0010000000080801
- (int)StringAsAppStoreViewTemplate:(id)arg1;	// IMP=0x0010000000080660
- (id)appStoreViewTemplateAsString:(int)arg1;	// IMP=0x0010000000080612
@property(nonatomic) _Bool hasAppStoreViewTemplate;
@property(nonatomic) int appStoreViewTemplate; // @synthesize appStoreViewTemplate=_appStoreViewTemplate;
@property(nonatomic) _Bool hasAdamIdentifier;
@property(readonly, nonatomic) _Bool hasOkButtonForPurchaseDialog;
@property(readonly, nonatomic) _Bool hasCancelButtonForPurchaseDialog;
@property(readonly, nonatomic) _Bool hasMessageForPurchaseDialog;
@property(readonly, nonatomic) _Bool hasTitleForPurchaseDialog;
@property(nonatomic) _Bool hasAdManagesPurchaseFlow;
- (id)allowedExternalDomainsAtIndex:(unsigned long long)arg1;	// IMP=0x001000000008048e
- (unsigned long long)allowedExternalDomainsCount;	// IMP=0x0010000000080471
- (void)addAllowedExternalDomains:(id)arg1;	// IMP=0x0010000000080407
- (void)clearAllowedExternalDomains;	// IMP=0x00100000000803ea
@property(nonatomic) _Bool hasAutoDismissInterval;
@property(nonatomic) double autoDismissInterval; // @synthesize autoDismissInterval=_autoDismissInterval;
@property(nonatomic) _Bool hasAllowSelfDismissal;
- (int)StringAsStoryboardSupportedOrientations:(id)arg1;	// IMP=0x0010000000080294
- (id)storyboardSupportedOrientationsAsString:(int)arg1;	// IMP=0x001000000008024b
@property(nonatomic) _Bool hasStoryboardSupportedOrientations;
@property(nonatomic) int storyboardSupportedOrientations; // @synthesize storyboardSupportedOrientations=_storyboardSupportedOrientations;
- (int)StringAsStoryboardPresentationOrientations:(id)arg1;	// IMP=0x001000000008014e
- (id)storyboardPresentationOrientationsAsString:(int)arg1;	// IMP=0x0010000000080105
@property(nonatomic) _Bool hasStoryboardPresentationOrientations;
@property(nonatomic) int storyboardPresentationOrientations; // @synthesize storyboardPresentationOrientations=_storyboardPresentationOrientations;
@property(nonatomic) _Bool hasLetterboxStoryboardColor;
- (id)storyboardSizesAtIndex:(unsigned long long)arg1;	// IMP=0x0010000000080020
- (unsigned long long)storyboardSizesCount;	// IMP=0x0010000000080003
- (void)addStoryboardSizes:(id)arg1;	// IMP=0x001000000007ff99
- (void)clearStoryboardSizes;	// IMP=0x001000000007ff7c
@property(nonatomic) _Bool hasScrolling;
@property(nonatomic) _Bool hasBackgroundColor;
@property(nonatomic) _Bool hasLoadNewImpressionOnActionComplete;
@property(nonatomic) _Bool hasConfirmedClickTimeInterval;
@property(readonly, nonatomic) _Bool hasContinueLabelForExitDialog;
@property(readonly, nonatomic) _Bool hasCancelLabelForExitDialog;
@property(readonly, nonatomic) _Bool hasMessageForExitDialog;
@property(readonly, nonatomic) _Bool hasTitleForExitDialog;
@property(nonatomic) _Bool hasSuppressesPermissionToExitDialog;
- (int)StringAsTransitionType:(id)arg1;	// IMP=0x001000000007fd39
- (id)transitionTypeAsString:(int)arg1;	// IMP=0x001000000007fce3
@property(nonatomic) _Bool hasTransitionType;
@property(nonatomic) int transitionType; // @synthesize transitionType=_transitionType;
- (id)parametersAtIndex:(unsigned long long)arg1;	// IMP=0x001000000007fc45
- (unsigned long long)parametersCount;	// IMP=0x001000000007fc28
- (void)addParameters:(id)arg1;	// IMP=0x001000000007fbbe
- (void)clearParameters;	// IMP=0x001000000007fba1
@property(readonly, nonatomic) _Bool hasActionWebArchiveURL;
@property(readonly, nonatomic) _Bool hasActionURL;
- (int)StringAsAction:(id)arg1;	// IMP=0x001000000007fa3f
- (id)actionAsString:(int)arg1;	// IMP=0x001000000007f9ec

@end

