//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ConfigurationEngineModel/CEMDeviceLockCommand.h>

@class NSString;

@interface CEMDeviceLockCommand (DMDAdditions)
- (id)dmf_statusForResult:(id)arg1 context:(id)arg2;	// IMP=0x0020000000005af3
- (_Bool)dmf_requestExecutesWithoutReturning;	// IMP=0x0010000000005aeb
- (id)dmf_executeOperationWithContext:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000005ae3
- (id)dmf_executeRequestWithContext:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000005a43

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
