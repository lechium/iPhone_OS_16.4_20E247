//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface AppInstallsDatabaseStore
{
}

+ (_Bool)createOrMigrateStoreUsingSchema:(id)arg1;	// IMP=0x0040000000233784
+ (id)storeDescriptor;	// IMP=0x001000000023370e
- (void)readUsingSession:(CDUnknownBlockType)arg1;	// IMP=0x00400000002346e7
- (void)modifyUsingTransaction:(CDUnknownBlockType)arg1;	// IMP=0x0010000000233795

@end

