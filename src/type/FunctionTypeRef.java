package type;

public class FunctionTypeRef extends TypeRef{
    protected TypeRef returnType;
    protected ParamTypeRefs params;

    public FunctionTypeRef(TypeRef returnType, ParamTypeRefs params) {
        super();
        this.returnType = returnType;
        this.params = params;
    }

    public boolean isFunction() {
        return true;
    }

    public boolean equals(Object other) {
        return (other instanceof FunctionTypeRef)
                && equals((FunctionTypeRef)other);
    }

    public boolean equals(FunctionTypeRef other) {
        return returnType.equals(other.returnType())
                && params.equals(other.params());
    }

    public TypeRef returnType() {
        return returnType;
    }

    public ParamTypeRefs params() {
        return params;
    }
}
