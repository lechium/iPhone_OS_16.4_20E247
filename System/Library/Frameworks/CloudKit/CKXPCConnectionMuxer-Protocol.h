//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol CKTestDeviceReference;

@protocol CKXPCConnectionMuxer
- (void)getProcessScopedClientProxyCreatorWithCompletionHandler:(void (^)(id <CKXPCProcessScopedClient>))arg1;
- (void)getLogicalDeviceScopedClientProxyCreatorForTestDeviceReferenceProtocol:(id <CKTestDeviceReference>)arg1 completionHandler:(void (^)(id <CKXPCLogicalDeviceScopedClient>))arg2;
@end

