//******************************************************************************
//
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.
//
// This code is licensed under the MIT License (MIT).
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//
//******************************************************************************

#import <StubReturn.h>
#import <AudioUnit/AUParameter.h>

@implementation AUParameter
/**
 @Status Stub
 @Notes
*/
- (void)setValue:(AUValue)value originator:(AUParameterObserverToken)originator {
    UNIMPLEMENTED();
}

/**
 @Status Stub
 @Notes
*/
- (void)setValue:(AUValue)value originator:(AUParameterObserverToken)originator atHostTime:(uint64_t)hostTime {
    UNIMPLEMENTED();
}

/**
 @Status Stub
 @Notes
*/
- (NSString*)stringFromValue:(const AUValue*)value {
    UNIMPLEMENTED();
    return StubReturn();
}

/**
 @Status Stub
 @Notes
*/
- (AUValue)valueFromString:(NSString*)string {
    UNIMPLEMENTED();
    return StubReturn();
}

/**
 @Status Stub
 @Notes
*/
- (instancetype)initWithCoder:(NSCoder*)decoder {
    UNIMPLEMENTED();
    return StubReturn();
}

/**
 @Status Stub
 @Notes
*/
- (void)encodeWithCoder:(NSCoder*)encoder {
    UNIMPLEMENTED();
}

/**
 @Status Stub
 @Notes
*/
+ (BOOL)supportsSecureCoding {
    UNIMPLEMENTED();
    return StubReturn();
}

@end
