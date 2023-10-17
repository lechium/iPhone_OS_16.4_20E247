//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURL;

@interface PAMediaConversionServiceResourceURLReference : NSObject
{
    _Bool _mustStopAccessingURL;	// 8 = 0x8
    _Bool _shouldDeleteOnDeallocation;	// 9 = 0x9
    NSURL *_url;	// 16 = 0x10
}

+ (_Bool)getPathHash:(unsigned long long *)arg1 lastPathComponent:(id *)arg2 forDictionaryRepresentation:(id)arg3;	// IMP=0x0040000000005261
+ (id)referenceWithDictionaryRepresentation:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000005096
+ (id)referenceWithURL:(id)arg1;	// IMP=0x0010000000004fc9
- (void).cxx_destruct;	// IMP=0x0020000000004fb9
@property _Bool shouldDeleteOnDeallocation; // @synthesize shouldDeleteOnDeallocation=_shouldDeleteOnDeallocation;
@property _Bool mustStopAccessingURL; // @synthesize mustStopAccessingURL=_mustStopAccessingURL;
@property(retain) NSURL *url; // @synthesize url=_url;
- (id)dictionaryRepresentationWithError:(id *)arg1;	// IMP=0x0010000000004ebc
- (void)dealloc;	// IMP=0x0010000000004ca1
- (_Bool)getFileSize:(unsigned long long *)arg1 error:(id *)arg2;	// IMP=0x0010000000004c40
- (unsigned long long)hash;	// IMP=0x0010000000004bf8
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000004b5a
- (void)getPathHash:(unsigned long long *)arg1 lastPathComponent:(id *)arg2;	// IMP=0x0010000000004a63

@end
