//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSExtension.h>

@class NSXPCConnection;

@interface SPPlugInExtension : NSExtension
{
    NSXPCConnection *_connection;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000019d2a
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void)notifyInactiveWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000019c6a
- (void)notifyActive;	// IMP=0x0010000000019c02
- (id)extensionVendor;	// IMP=0x00100000000199e9
- (id)initWithPlugin:(id)arg1;	// IMP=0x00100000000199ba

@end

