//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class _TtC9storekitd6Client;

@interface HandleInvalidReceiptTask
{
    int _pid;	// 8 = 0x8
    _TtC9storekitd6Client *_client;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000009b12b
@property(readonly, nonatomic) int pid; // @synthesize pid=_pid;
@property(readonly, nonatomic) _TtC9storekitd6Client *client; // @synthesize client=_client;
- (void)_presentSystemDialogWithTitle:(id)arg1 dialogMessage:(id)arg2 actionURL:(id)arg3;	// IMP=0x001000000009adb3
- (id)productURLForAppWithID:(id)arg1;	// IMP=0x001000000009ad49
- (void)terminateClientApplication;	// IMP=0x001000000009aaf7
- (id)dialogRequestWithTitle:(id)arg1 dialogMessage:(id)arg2;	// IMP=0x001000000009a968
- (void)main;	// IMP=0x001000000009a468
- (id)initWithClient:(id)arg1 pid:(int)arg2;	// IMP=0x001000000009a3e8

@end
