//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContentKit/WFContentCollection.h>

@interface WFContentCollection (SandboxExtension)
+ (void)generateCollectionFromPasteboard:(id)arg1 sandboxExtensionProvider:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00500000000145b4
+ (id)requiredResourcesForContentInPasteboard:(id)arg1;	// IMP=0x00500000000145a7
- (id)requiredResourcesForContent;	// IMP=0x00100000000144c3
- (void)getRecipientsIgnoringContactAccessResourceAvailability:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000133d5b
- (void)getRecipients:(CDUnknownBlockType)arg1;	// IMP=0x0010000000133d44
@end

