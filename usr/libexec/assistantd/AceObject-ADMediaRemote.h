//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/AceObject.h>

@interface AceObject (ADMediaRemote)
- (id)_ad_mediaRemoteOptions;	// IMP=0x0010000000140e44
- (void)_ad_setPayloadOnRequestInfo:(id)arg1;	// IMP=0x00100000001c478c
- (void)_adui_notifyOthersOfArrival;	// IMP=0x00100000001e9f39
- (_Bool)_adui_shouldNotifyOthersOfArrival;	// IMP=0x00100000001e9f31
- (void)adClientConnection_leaveRequestGroup;	// IMP=0x001000000027c974
- (void)adClientConnection_enterRequestGroup:(id)arg1;	// IMP=0x001000000027c76c
- (_Bool)ad_transcriptionResultRequiresAddressBook;	// IMP=0x001000000027cc9c
- (id)ad_transcriptionResultWithAddressBookManager:(id)arg1;	// IMP=0x001000000027cc94
- (_Bool)ad_shouldUseExtendedFlowTimeout;	// IMP=0x00100000002b3923
@end
