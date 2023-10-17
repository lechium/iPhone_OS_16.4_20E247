//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ClassKit/CLSArchivedMultipleChoiceAnswerFormat.h>

@class NSObject, NSString;
@protocol PDDatabaseValue;

@interface CLSArchivedMultipleChoiceAnswerFormat (PDDatabaseEntity)
+ (long long)migrationOrder;	// IMP=0x0020000000094529
+ (_Bool)migrateFromVersion:(unsigned long long)arg1 finalVersion:(out unsigned long long *)arg2 inDatabase:(id)arg3;	// IMP=0x00100000000943b4
+ (id)entityName;	// IMP=0x0010000000094100
- (void)willBeDeletedFromDatabase:(id)arg1;	// IMP=0x0020000000094452
- (void)bindTo:(id)arg1;	// IMP=0x0010000000094229
- (id)initWithDatabaseRow:(id)arg1;	// IMP=0x001000000009410d

// Remaining properties
@property(readonly, nonatomic) unsigned long long changeHash;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic, getter=isDeleteTracked) _Bool deleteTracked;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<PDDatabaseValue> *identityValue;
@property(readonly) Class superclass;
@end
