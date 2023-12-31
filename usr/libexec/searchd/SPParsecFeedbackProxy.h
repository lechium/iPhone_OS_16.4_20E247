//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SPParsecDatastore;
@protocol SFFeedbackListener;

@interface SPParsecFeedbackProxy : NSObject
{
    NSObject<SFFeedbackListener> *_listener;	// 8 = 0x8
    SPParsecDatastore *_datastore;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000002fd29
@property __weak SPParsecDatastore *datastore; // @synthesize datastore=_datastore;
@property(retain, nonatomic) NSObject<SFFeedbackListener> *listener; // @synthesize listener=_listener;
- (void)didReportUserResponseFeedback:(id)arg1;	// IMP=0x001000000002fc79
- (void)didEngageSection:(id)arg1;	// IMP=0x001000000002fc0b
- (void)didGradeResultRelevancy:(id)arg1;	// IMP=0x001000000002fb9d
- (void)reportFeedback:(id)arg1 queryId:(long long)arg2;	// IMP=0x001000000002fb2a
- (void)didPerformCommand:(id)arg1;	// IMP=0x001000000002faa1
- (void)cardViewDidAppear:(id)arg1;	// IMP=0x001000000002fa33
- (void)sectionHeaderDidBecomeVisible:(id)arg1;	// IMP=0x001000000002f9c5
- (void)didClearInput:(id)arg1;	// IMP=0x001000000002f957
- (void)didAppendLateSections:(id)arg1;	// IMP=0x001000000002f89c
- (void)didReceiveResultsAfterTimeout:(id)arg1;	// IMP=0x001000000002f82e
- (void)suggestionsDidBecomeVisible:(id)arg1;	// IMP=0x001000000002f773
- (void)resultsDidBecomeVisible:(id)arg1;	// IMP=0x001000000002f705
- (void)sendCustomFeedback:(id)arg1;	// IMP=0x001000000002f67c
- (void)didErrorOccur:(id)arg1;	// IMP=0x001000000002f60e
- (void)didEngageCardSection:(id)arg1;	// IMP=0x001000000002f5a0
- (void)didEngageSuggestion:(id)arg1;	// IMP=0x001000000002f532
- (void)didEngageResult:(id)arg1;	// IMP=0x001000000002f4c4
- (void)didRankSections:(id)arg1;	// IMP=0x001000000002f456
- (void)didEndSearch:(id)arg1;	// IMP=0x001000000002f3e8
- (void)didStartSearch:(id)arg1;	// IMP=0x001000000002f37a
- (void)cardViewDidDisappear:(id)arg1;	// IMP=0x001000000002f307
- (void)searchViewDidDisappear:(id)arg1;	// IMP=0x001000000002f294
- (void)searchViewDidAppear:(id)arg1;	// IMP=0x001000000002f226

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

