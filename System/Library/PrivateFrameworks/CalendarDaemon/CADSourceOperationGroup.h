//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CADOperationGroup.h"

__attribute__((visibility("hidden")))
@interface CADSourceOperationGroup : CADOperationGroup
{
}

+ (_Bool)requiresEventAccess;	// IMP=0x001000000004b8d8
- (int)_tryPerformBlockWithSourceID:(id)arg1 forAction:(unsigned long long)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000004ec08
- (int)_tryPerformBlockWithSourceID:(id)arg1 forAction:(unsigned long long)arg2 entityType:(int)arg3 withBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000000004eb20
- (void)CADSourceRemoveExchangeDelegateWithID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000004e885
- (void)CADSourceAddExchangeDelegateWithName:(id)arg1 emailAddress:(id)arg2 toSourceWithID:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000000004e43b
- (void)CADSourceUpdateGrantedDelegate:(id)arg1 action:(long long)arg2 sourceID:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000000004e0bf
- (void)CADSourceGetGrantedDelegatesList:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000004db7f
- (void)CADRemoveCalendarItemsOlderThanDate:(id)arg1 ofType:(int)arg2 inSource:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000000004da2e
- (void)CADCountCalendarItemsOfType:(int)arg1 inSource:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000004d90b
- (void)CADSourceRefresh:(id)arg1 isUserRequested:(_Bool)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000004d569
- (void)CADSourceGetNotificationCollection:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000004d371
- (void)CADSourceGetConstraints:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000004c4d8
- (void)CADDatabaseGetLocalBirthdaySource:(CDUnknownBlockType)arg1;	// IMP=0x000000000004c1bd
- (void)CADDatabaseGetLocalSourceWithEnableIfNeeded:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000004bdae
- (void)CADDatabaseGetSourcesWithFaultedProperties:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000004b8e0

@end

