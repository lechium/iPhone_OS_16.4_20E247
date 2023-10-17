//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_BRCOperation.h"

@class BRCServerZone, NSString;

__attribute__((visibility("hidden")))
@interface BRCFetchRecentAndFavoriteDocumentsOperation : _BRCOperation
{
    BRCServerZone *_serverZone;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000208169
- (void)main;	// IMP=0x000000000020807e
- (void)_performQueryOperationForBit:(unsigned int)arg1 index:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000002079db
- (id)createActivity;	// IMP=0x00000000002079b2
- (_Bool)shouldRetryForError:(id)arg1;	// IMP=0x000000000020799d
- (id)initWithServerZone:(id)arg1;	// IMP=0x0000000000207833

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
