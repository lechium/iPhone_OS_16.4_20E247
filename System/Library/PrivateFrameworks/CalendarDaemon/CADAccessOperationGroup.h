//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CADOperationGroup.h"

__attribute__((visibility("hidden")))
@interface CADAccessOperationGroup : CADOperationGroup
{
}

+ (_Bool)requiresEventAccess;	// IMP=0x001000000004a576
- (void)CADDatabaseResetWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000004a697
- (void)CADDatabaseGetAccess:(CDUnknownBlockType)arg1;	// IMP=0x000000000004a619
- (void)CADDatabaseSetInitializationOptions:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000004a57e

@end

