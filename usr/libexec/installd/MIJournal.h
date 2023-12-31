//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet, NSURL;

@interface MIJournal : NSObject
{
}

+ (id)sharedInstance;	// IMP=0x004000000002898c
- (void)reconcile;	// IMP=0x00200000000293e8
- (void)_enumerateJournaledEntriesContinuingOnFailure:(_Bool)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000029010
- (_Bool)purgeJournalEntry:(id)arg1 withError:(id *)arg2;	// IMP=0x0010000000028e10
- (_Bool)writeJournalEntry:(id)arg1 withError:(id *)arg2;	// IMP=0x0010000000028b64
- (id)_journalStorageURLForUniqueIdentifier:(id)arg1;	// IMP=0x0010000000028ad5
@property(readonly, nonatomic) NSURL *journalStorageBase;
@property(readonly, nonatomic) NSSet *journalEntryClasses;
- (id)init;	// IMP=0x0010000000028a19

@end

