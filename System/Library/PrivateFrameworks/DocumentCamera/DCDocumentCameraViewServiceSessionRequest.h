//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DCSandboxExtension, NSString;

__attribute__((visibility("hidden")))
@interface DCDocumentCameraViewServiceSessionRequest : NSObject
{
    NSString *_appName;	// 8 = 0x8
    DCSandboxExtension *_cachesDirectorySandboxExtension;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000037d81
- (void).cxx_destruct;	// IMP=0x0000000000037f25
@property(readonly, nonatomic) DCSandboxExtension *cachesDirectorySandboxExtension; // @synthesize cachesDirectorySandboxExtension=_cachesDirectorySandboxExtension;
@property(readonly, nonatomic) NSString *appName; // @synthesize appName=_appName;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000037e63
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000037d89
- (id)init;	// IMP=0x0000000000037c72

@end

