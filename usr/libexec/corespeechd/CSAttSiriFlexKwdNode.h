//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSAsset, CSAttSiriController, CSAttSiriRequestContext, CSFlexKeywordSpotter, MISSING_TYPE, NSArray, NSString;

@interface CSAttSiriFlexKwdNode : NSObject
{
    _Bool _isReady;	// 8 = 0x8
    _Bool _didTrigger;	// 9 = 0x9
    unsigned long long _type;	// 16 = 0x10
    NSArray *_requiredNodes;	// 24 = 0x18
    CSAttSiriController *_attSiriController;	// 32 = 0x20
    NSString *_mhId;	// 40 = 0x28
    CSFlexKeywordSpotter *_kwdSpotter;	// 48 = 0x30
    CSAttSiriRequestContext *_context;	// 56 = 0x38
    unsigned long long _audioStreamId;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00200000000e1478
@property(nonatomic) unsigned long long audioStreamId; // @synthesize audioStreamId=_audioStreamId;
@property(nonatomic) _Bool didTrigger; // @synthesize didTrigger=_didTrigger;
@property(retain, nonatomic) CSAttSiriRequestContext *context; // @synthesize context=_context;
@property(retain, nonatomic) CSFlexKeywordSpotter *kwdSpotter; // @synthesize kwdSpotter=_kwdSpotter;
@property(retain, nonatomic) NSString *mhId; // @synthesize mhId=_mhId;
@property(nonatomic) __weak CSAttSiriController *attSiriController; // @synthesize attSiriController=_attSiriController;
@property(nonatomic) _Bool isReady; // @synthesize isReady=_isReady;
@property(retain, nonatomic) NSArray *requiredNodes; // @synthesize requiredNodes=_requiredNodes;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (MISSING_TYPE *)triggerReportedFromFlxKwdSpotter: /* Error: Ran out of types for this method. */;	// IMP=0x00100000000e10ca
- (void)attSiriAudioSrcNodeLPCMRecordBufferAvailable:(id)arg1 audioChunk:(id)arg2;	// IMP=0x00100000000e10b1
- (void)attSiriAudioSrcNodeDidStop:(id)arg1;	// IMP=0x00100000000e1088
- (void)attSiriAudioSrcNodeDidStartRecording:(id)arg1 successfully:(_Bool)arg2 error:(id)arg3;	// IMP=0x00100000000e0ff4
- (void)startWithContext:(id)arg1 audioStreamId:(unsigned long long)arg2;	// IMP=0x00100000000e0ebf
- (void)stop;	// IMP=0x00100000000e0ea9
- (void)start;	// IMP=0x00100000000e0ea3
- (void)removeReceiver:(id)arg1;	// IMP=0x00100000000e0e9d
- (void)pause;	// IMP=0x00100000000e0e97
- (void)addReceiver:(id)arg1;	// IMP=0x00100000000e0e91
- (id)initWithAttSiriController:(id)arg1;	// IMP=0x00100000000e0d8d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) CSAsset *prefetchedAsset;
@property(readonly) Class superclass;

@end
