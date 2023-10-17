//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSet;
@protocol PLJournalEntryPayload, PLJournalEntryPayloadID;

@protocol PLJournalEntryPayloadInsertAdapter
- (id <PLJournalEntryPayload>)payloadForChangedKeys:(NSSet *)arg1;
- (id <PLJournalEntryPayloadID>)payloadID;
- (_Bool)isValidForJournalPersistence;
@end
