//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface AccountAssistanceProgramMessage
{
}

+ (id)_propertySettersForAssistanceProgramMessage;	// IMP=0x00400000003e6526
+ (id)databaseTable;	// IMP=0x00100000003e6519
+ (void)deleteAssistanceProgramMessagePID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x00100000003e6480
+ (id)_predicateForEventPID:(long long)arg1;	// IMP=0x00100000003e640d
+ (id)insertAssistanceProgramMessage:(id)arg1 forEventPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x00100000003e6085
+ (id)assistanceProgramMessagesWithEventPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x00100000003e5e6f
- (id)assistanceProgramMessage;	// IMP=0x00400000003e62d5

@end

