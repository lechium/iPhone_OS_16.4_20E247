//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, SAAISearchCompleted, SAAIStartSession;
@protocol ADAcousticIDHelperDelegate;

@interface ADAcousticIDHelper : NSObject
{
    id <ADAcousticIDHelperDelegate> _delegate;	// 8 = 0x8
    SAAIStartSession *_currentSession;	// 16 = 0x10
    NSMutableSet *_outstandingSearches;	// 24 = 0x18
    SAAISearchCompleted *_completed;	// 32 = 0x20
    _Bool _sessionIsComplete;	// 40 = 0x28
    double _minimumFingerprintDuration;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00200000000f32a1
@property(nonatomic) __weak id <ADAcousticIDHelperDelegate> delegate; // @synthesize delegate=_delegate;
- (void)failCurrentSession;	// IMP=0x00100000000f3225
- (_Bool)shouldSendFingerprintForDuration:(double)arg1;	// IMP=0x00100000000f31bc
- (void)handleCommandFailed:(id)arg1;	// IMP=0x00100000000f3122
- (void)handleRetrySearch:(id)arg1;	// IMP=0x00100000000f3094
- (void)handleSearchCompleted:(id)arg1;	// IMP=0x00100000000f2fe0
- (void)_removeOutstandingSearchForRefId:(id)arg1;	// IMP=0x00100000000f2fca
- (_Bool)hasRelatedCommandForRefId:(id)arg1;	// IMP=0x00100000000f2f48
- (id)cancelSessionCommand;	// IMP=0x00100000000f2ee1
- (id)searchCommandForFingerprintData:(id)arg1 withDuration:(double)arg2;	// IMP=0x00100000000f2da6
- (id)currentSession;	// IMP=0x00100000000f2d98
- (_Bool)sessionIsComplete;	// IMP=0x00100000000f2d8f
- (void)startNewAcousticIDSessionWithRequestId:(id)arg1 refId:(id)arg2;	// IMP=0x00100000000f2c78
- (void)reset;	// IMP=0x00100000000f2c2a
- (void)_clearOutstandingSearchIds;	// IMP=0x00100000000f2c10
- (void)_addOutstandingSearchId:(id)arg1;	// IMP=0x00100000000f2bb6

@end

