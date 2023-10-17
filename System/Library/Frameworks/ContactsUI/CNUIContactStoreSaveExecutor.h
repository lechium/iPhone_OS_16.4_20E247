//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNUIContactStoreSaveExecutor : NSObject
{
}

- (_Bool)performSaveForMutableContact:(id)arg1 group:(id)arg2 container:(id)arg3 saveConfiguration:(id)arg4 issuedRequestIdentifiers:(id)arg5;	// IMP=0x000000000020097a
- (id)saveLinkedContactsWithSaveConfiguration:(id)arg1 contactToSave:(id)arg2 additionalLinkedContacts:(id)arg3 issuedRequestIdentifiers:(id)arg4 saveDelegate:(id)arg5;	// IMP=0x0000000000200723
- (void)handleGroupContextForSaveConfiguration:(id)arg1 contactToSave:(id)arg2 issuedRequestIdentifiers:(id)arg3 saveDelegate:(id)arg4;	// IMP=0x000000000020052d
- (_Bool)handleContainerContextForSaveConfiguration:(id)arg1 contactToSave:(id)arg2 saveDelegate:(id)arg3 issuedRequestIdentifiers:(id)arg4 additionalLinkedContacts:(id)arg5;	// IMP=0x00000000001fff0b
- (id)validatedContactForSaveConfiguration:(id)arg1;	// IMP=0x00000000001ffc67
- (_Bool)saveShadowContactForSaveConfiguration:(id)arg1;	// IMP=0x00000000001ff8e4
- (id)executeSaveWithConfiguration:(id)arg1 saveDelegate:(id)arg2;	// IMP=0x00000000001ff44b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
