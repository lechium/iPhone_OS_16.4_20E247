//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (GSExtensions)
+ (id)gs_stringWithFileSystemRepresentation:(const char *)arg1;	// IMP=0x00500000000110f7
- (id)gs_stringByUpdatingPathExtensionWithPathOrURL:(id)arg1;	// IMP=0x0010000000011547
- (id)gs_issueReadExtensionIfNeededForAuditToken:(CDStruct_6ad76789)arg1;	// IMP=0x00100000000114c3
- (id)gs_issueExtension:(const char *)arg1 error:(id *)arg2;	// IMP=0x0010000000011355
- (_Bool)validateGSNameAllowingDot:(_Bool)arg1 error:(id *)arg2;	// IMP=0x001000000001117f
- (_Bool)validateGSName:(out id *)arg1;	// IMP=0x0010000000011168
@end

