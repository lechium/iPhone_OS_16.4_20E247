//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, SDPeopleSuggestionsResult, SDXPCHelperConnection, _PSPredictionContext, _PSSuggester;
@protocol OS_dispatch_queue;

@interface SDSuggestionBrowser : NSObject
{
    NSString *_bundleID;	// 8 = 0x8
    NSArray *_typeIdentifiersBeingShared;	// 16 = 0x10
    NSArray *_photosAssetIDs;	// 24 = 0x18
    _PSSuggester *_suggester;	// 32 = 0x20
    _PSPredictionContext *_predictionContext;	// 40 = 0x28
    int _predictionNumber;	// 48 = 0x30
    NSString *_sessionID;	// 56 = 0x38
    SDXPCHelperConnection *_helperConnection;	// 64 = 0x40
    NSArray *_nodes;	// 72 = 0x48
    NSArray *_peopleSuggestions;	// 80 = 0x50
    NSObject<OS_dispatch_queue> *_primedSuggestionssQueue;	// 88 = 0x58
    SDPeopleSuggestionsResult *_primedSuggestionsResult;	// 96 = 0x60
    SDPeopleSuggestionsResult *_suggestionsResult;	// 104 = 0x68
    NSArray *_suggestions;	// 112 = 0x70
    NSArray *_suggestionNodes;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x00200000000cc5fa
@property(copy, nonatomic) NSArray *suggestionNodes; // @synthesize suggestionNodes=_suggestionNodes;
@property(copy, nonatomic) NSArray *suggestions; // @synthesize suggestions=_suggestions;
@property(retain, nonatomic) SDPeopleSuggestionsResult *suggestionsResult; // @synthesize suggestionsResult=_suggestionsResult;
@property(retain, nonatomic) SDPeopleSuggestionsResult *primedSuggestionsResult; // @synthesize primedSuggestionsResult=_primedSuggestionsResult;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *primedSuggestionssQueue; // @synthesize primedSuggestionssQueue=_primedSuggestionssQueue;
@property(copy, nonatomic) NSArray *peopleSuggestions; // @synthesize peopleSuggestions=_peopleSuggestions;
@property(readonly, copy) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(readonly, copy) NSArray *nodes; // @synthesize nodes=_nodes;
@property(nonatomic) __weak SDXPCHelperConnection *helperConnection; // @synthesize helperConnection=_helperConnection;
@property(copy, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
- (id)extractTextFromPDFFileURL:(id)arg1;	// IMP=0x00100000000cc518
- (id)extractTextFromTextFileURL:(id)arg1;	// IMP=0x00100000000cc36d
- (id)extractTextFromFileURL:(id)arg1;	// IMP=0x00100000000cc296
- (void)suggestLessPeopleSuggestionIdentifier:(id)arg1;	// IMP=0x00100000000cc05f
- (void)provideFeedbackForPeopleSuggestionNodeIdentifier:(id)arg1;	// IMP=0x00100000000cbf5b
- (id)_peopleSuggestionNodeForNodeIdentifier:(id)arg1 outIndex:(long long *)arg2;	// IMP=0x00100000000cbd6b
- (void)provideFeedbackForPeopleSuggestionIdentifier:(id)arg1;	// IMP=0x00100000000cbc67
- (id)_peopleSuggestionForIdentifier:(id)arg1 outIndex:(long long *)arg2;	// IMP=0x00100000000cba77
- (void)provideFeedbackForNodeAtIndex:(id)arg1 bundleID:(id)arg2 abandoned:(_Bool)arg3;	// IMP=0x00100000000cb521
- (void)_loadIconForSuggestionNode:(id)arg1 outIcon:(struct CGImage **)arg2 outIconData:(id *)arg3;	// IMP=0x00100000000caf4b
- (id)peopleSuggestionNodes;	// IMP=0x00100000000cabd1
- (void)_updateSuggestions;	// IMP=0x00100000000ca8cf
- (void)_fetchSuggestionsIfNeeded;	// IMP=0x00100000000ca56c
- (id)startPeopleSuggesterWithPreheating:(_Bool)arg1;	// IMP=0x00100000000c9f03
- (void)primeSuggestions;	// IMP=0x00100000000c9d87
- (id)initWithBundleID:(id)arg1 typeIdentifiersBeingShared:(id)arg2 photosAssetIDs:(id)arg3 urlsBeingShared:(id)arg4 shouldSuggestFamilyMembers:(_Bool)arg5 isSharePlayAvailable:(_Bool)arg6 supportsCollaboration:(_Bool)arg7 peopleSuggestionBundleIds:(id)arg8 processedImageResultsData:(id)arg9;	// IMP=0x00100000000c8f97

@end

