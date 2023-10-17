//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class BMMultiStreamVectorClock;

@interface BMFetchAtomBatchesRequest
{
    _Bool _isReciprocalRequest;	// 32 = 0x20
    BMMultiStreamVectorClock *_vectorClock;	// 40 = 0x28
    unsigned long long _atomBatchVersion;	// 48 = 0x30
    unsigned long long _batchSize;	// 56 = 0x38
    unsigned long long _batchSequenceNumber;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x002000000001dc64
@property(nonatomic) unsigned long long batchSequenceNumber; // @synthesize batchSequenceNumber=_batchSequenceNumber;
@property(nonatomic) unsigned long long batchSize; // @synthesize batchSize=_batchSize;
@property(nonatomic) _Bool isReciprocalRequest; // @synthesize isReciprocalRequest=_isReciprocalRequest;
@property(nonatomic) unsigned long long atomBatchVersion; // @synthesize atomBatchVersion=_atomBatchVersion;
@property(retain, nonatomic) BMMultiStreamVectorClock *vectorClock; // @synthesize vectorClock=_vectorClock;
- (id)dictionaryRepresentation;	// IMP=0x001000000001d8bd
- (id)initFromDictionary:(id)arg1;	// IMP=0x001000000001d692

@end
