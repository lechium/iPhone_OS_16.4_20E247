//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "VKCTextRecognitionResult.h"

@class NSArray, UIMenu, UIViewController, VKCImageAnalyzerRequest, VKCVisualSearchResult;

__attribute__((visibility("hidden")))
@interface VKCImageAnalysisResult : VKCTextRecognitionResult
{
    int _analysisRequestID;	// 8 = 0x8
    VKCVisualSearchResult *_visualSearchResult;	// 16 = 0x10
    VKCImageAnalyzerRequest *_request;	// 24 = 0x18
    double _totalBoundingBoxTextArea;	// 32 = 0x20
    double _totalQuadTextArea;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x006000000001aaeb
- (void).cxx_destruct;	// IMP=0x000000000001b272
@property(nonatomic) double totalQuadTextArea; // @synthesize totalQuadTextArea=_totalQuadTextArea;
@property(nonatomic) double totalBoundingBoxTextArea; // @synthesize totalBoundingBoxTextArea=_totalBoundingBoxTextArea;
@property(nonatomic) int analysisRequestID; // @synthesize analysisRequestID=_analysisRequestID;
@property(retain, nonatomic) VKCImageAnalyzerRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) VKCVisualSearchResult *visualSearchResult; // @synthesize visualSearchResult=_visualSearchResult;
@property(readonly, nonatomic) NSArray *appClipDataDetectorElements;
@property(readonly, nonatomic) NSArray *mrcDataDetectorElements;
@property(readonly, nonatomic) NSArray *textDataDetectorElements;
@property(readonly, nonatomic) NSArray *barcodeActions;
@property(nonatomic) __weak UIViewController *presentingViewControllerForMrcAction;
@property(readonly, nonatomic) UIMenu *mrcMenu;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001ab71
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001ab42
- (id)initWithDocumentObservation:(id)arg1 mrcDataDetectors:(id)arg2 imageSize:(struct CGSize)arg3;	// IMP=0x000000000001aaf3
- (id)ddDictionaryFromDataDetectorElement:(id)arg1;	// IMP=0x00000000000669f4
- (id)dataDetectorsFromRecognitionResult:(id)arg1;	// IMP=0x00000000000668b9
- (id)wordPlistFromOutputRegion:(id)arg1 document:(id)arg2;	// IMP=0x0000000000066705
- (id)wordsPlistFromRegion:(id)arg1 sourceDocument:(id)arg2;	// IMP=0x00000000000665ba
- (id)linesPlistFromSourceDocument:(id)arg1;	// IMP=0x0000000000066451
- (id)dictionaryRepresentation;	// IMP=0x0000000000066260

@end

