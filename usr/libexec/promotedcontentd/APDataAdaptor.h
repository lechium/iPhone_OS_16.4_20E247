//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface APDataAdaptor : NSObject
{
    NSString *_identifier;	// 8 = 0x8
    NSDictionary *_parameters;	// 16 = 0x10
}

+ (id)identifier;	// IMP=0x00200000000091d3
+ (id)dispatchQueue;	// IMP=0x0010000000009152
- (void).cxx_destruct;	// IMP=0x0020000000009def
@property(retain, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (_Bool)_validateParameters:(id *)arg1;	// IMP=0x0010000000009c37
- (void)_run:(CDUnknownBlockType)arg1;	// IMP=0x0010000000009af3
- (_Bool)_requireClassType:(id)arg1 name:(id)arg2 expectedClass:(Class)arg3 error:(id *)arg4;	// IMP=0x001000000000994a
- (_Bool)_checkClassType:(id)arg1 name:(id)arg2 expectedClass:(Class)arg3 error:(id *)arg4;	// IMP=0x001000000000977f
- (void)runWithParameters:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000000960c
- (id)runWithParametersSync:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000091e8
- (_Bool)allowEmptyParameters;	// IMP=0x00100000000091e0

@end
